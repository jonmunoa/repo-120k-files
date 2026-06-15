// fichero 31049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31049;

Registro31049 crear_registro31049(int id) {
    Registro31049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
