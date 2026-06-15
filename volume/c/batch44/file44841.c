// fichero 44841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44841;

Registro44841 crear_registro44841(int id) {
    Registro44841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
