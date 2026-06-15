// fichero 11425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11425;

Registro11425 crear_registro11425(int id) {
    Registro11425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
