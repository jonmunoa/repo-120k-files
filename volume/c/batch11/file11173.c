// fichero 11173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11173;

Registro11173 crear_registro11173(int id) {
    Registro11173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
