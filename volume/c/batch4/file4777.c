// fichero 4777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4777;

Registro4777 crear_registro4777(int id) {
    Registro4777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
