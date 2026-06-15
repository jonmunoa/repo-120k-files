// fichero 31913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31913;

Registro31913 crear_registro31913(int id) {
    Registro31913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
