// fichero 36033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36033;

Registro36033 crear_registro36033(int id) {
    Registro36033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
