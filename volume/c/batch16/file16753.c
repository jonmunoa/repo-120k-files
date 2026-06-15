// fichero 16753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16753;

Registro16753 crear_registro16753(int id) {
    Registro16753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
