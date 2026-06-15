// fichero 38985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38985;

Registro38985 crear_registro38985(int id) {
    Registro38985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
