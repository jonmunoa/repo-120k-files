// fichero 31781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31781;

Registro31781 crear_registro31781(int id) {
    Registro31781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
