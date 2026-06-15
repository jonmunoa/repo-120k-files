// fichero 27985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27985;

Registro27985 crear_registro27985(int id) {
    Registro27985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
