// fichero 47217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47217;

Registro47217 crear_registro47217(int id) {
    Registro47217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
