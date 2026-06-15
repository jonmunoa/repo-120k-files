// fichero 36661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36661;

Registro36661 crear_registro36661(int id) {
    Registro36661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
