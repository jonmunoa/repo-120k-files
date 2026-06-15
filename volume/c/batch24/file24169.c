// fichero 24169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24169;

Registro24169 crear_registro24169(int id) {
    Registro24169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
