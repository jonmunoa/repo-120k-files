// fichero 23897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23897;

Registro23897 crear_registro23897(int id) {
    Registro23897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
