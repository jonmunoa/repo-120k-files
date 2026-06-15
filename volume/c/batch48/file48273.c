// fichero 48273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48273;

Registro48273 crear_registro48273(int id) {
    Registro48273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
