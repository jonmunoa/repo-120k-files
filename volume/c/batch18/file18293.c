// fichero 18293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18293;

Registro18293 crear_registro18293(int id) {
    Registro18293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
