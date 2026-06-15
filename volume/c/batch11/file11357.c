// fichero 11357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11357;

Registro11357 crear_registro11357(int id) {
    Registro11357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
