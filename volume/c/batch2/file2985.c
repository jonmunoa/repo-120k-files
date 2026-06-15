// fichero 2985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2985;

Registro2985 crear_registro2985(int id) {
    Registro2985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
