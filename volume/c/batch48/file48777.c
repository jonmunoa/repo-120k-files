// fichero 48777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48777;

Registro48777 crear_registro48777(int id) {
    Registro48777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
