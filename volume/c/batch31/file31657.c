// fichero 31657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31657;

Registro31657 crear_registro31657(int id) {
    Registro31657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
