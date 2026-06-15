// fichero 10465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10465;

Registro10465 crear_registro10465(int id) {
    Registro10465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
