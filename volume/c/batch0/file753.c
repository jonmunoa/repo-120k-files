// fichero 753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro753;

Registro753 crear_registro753(int id) {
    Registro753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
