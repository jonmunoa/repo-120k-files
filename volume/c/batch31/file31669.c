// fichero 31669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31669;

Registro31669 crear_registro31669(int id) {
    Registro31669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
