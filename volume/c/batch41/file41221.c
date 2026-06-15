// fichero 41221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41221;

Registro41221 crear_registro41221(int id) {
    Registro41221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
