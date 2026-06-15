// fichero 23985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23985;

Registro23985 crear_registro23985(int id) {
    Registro23985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
