// fichero 34521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34521;

Registro34521 crear_registro34521(int id) {
    Registro34521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
