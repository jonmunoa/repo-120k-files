// fichero 24777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24777;

Registro24777 crear_registro24777(int id) {
    Registro24777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
