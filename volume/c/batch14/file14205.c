// fichero 14205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14205;

Registro14205 crear_registro14205(int id) {
    Registro14205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
