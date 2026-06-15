// fichero 47777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47777;

Registro47777 crear_registro47777(int id) {
    Registro47777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
