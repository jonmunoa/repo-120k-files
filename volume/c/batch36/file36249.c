// fichero 36249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36249;

Registro36249 crear_registro36249(int id) {
    Registro36249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
