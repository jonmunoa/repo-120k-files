// fichero 26205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26205;

Registro26205 crear_registro26205(int id) {
    Registro26205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
