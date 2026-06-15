// fichero 20929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20929;

Registro20929 crear_registro20929(int id) {
    Registro20929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
