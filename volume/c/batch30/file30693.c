// fichero 30693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30693;

Registro30693 crear_registro30693(int id) {
    Registro30693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
