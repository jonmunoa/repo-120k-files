// fichero 8777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8777;

Registro8777 crear_registro8777(int id) {
    Registro8777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
