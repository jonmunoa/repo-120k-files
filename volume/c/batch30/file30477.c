// fichero 30477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30477;

Registro30477 crear_registro30477(int id) {
    Registro30477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
