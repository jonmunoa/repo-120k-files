// fichero 11109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11109;

Registro11109 crear_registro11109(int id) {
    Registro11109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
