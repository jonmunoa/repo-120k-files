// fichero 34793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34793;

Registro34793 crear_registro34793(int id) {
    Registro34793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
