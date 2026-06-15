// fichero 41617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41617;

Registro41617 crear_registro41617(int id) {
    Registro41617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
