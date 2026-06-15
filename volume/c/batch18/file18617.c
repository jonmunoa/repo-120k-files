// fichero 18617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18617;

Registro18617 crear_registro18617(int id) {
    Registro18617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
