// fichero 17953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17953;

Registro17953 crear_registro17953(int id) {
    Registro17953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
