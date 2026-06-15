// fichero 11477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11477;

Registro11477 crear_registro11477(int id) {
    Registro11477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
