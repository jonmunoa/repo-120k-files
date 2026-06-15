// fichero 24109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24109;

Registro24109 crear_registro24109(int id) {
    Registro24109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
