// fichero 49205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49205;

Registro49205 crear_registro49205(int id) {
    Registro49205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
