// fichero 17777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17777;

Registro17777 crear_registro17777(int id) {
    Registro17777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
