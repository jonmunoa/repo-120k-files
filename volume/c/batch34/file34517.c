// fichero 34517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34517;

Registro34517 crear_registro34517(int id) {
    Registro34517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
