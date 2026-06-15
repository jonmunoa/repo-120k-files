// fichero 36793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36793;

Registro36793 crear_registro36793(int id) {
    Registro36793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
