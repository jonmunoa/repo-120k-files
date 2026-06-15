// fichero 40153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40153;

Registro40153 crear_registro40153(int id) {
    Registro40153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
