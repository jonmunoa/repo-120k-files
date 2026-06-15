// fichero 11893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11893;

Registro11893 crear_registro11893(int id) {
    Registro11893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
