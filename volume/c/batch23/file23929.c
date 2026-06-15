// fichero 23929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23929;

Registro23929 crear_registro23929(int id) {
    Registro23929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
