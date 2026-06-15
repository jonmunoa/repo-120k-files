// fichero 11921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11921;

Registro11921 crear_registro11921(int id) {
    Registro11921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
