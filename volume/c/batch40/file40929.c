// fichero 40929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40929;

Registro40929 crear_registro40929(int id) {
    Registro40929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
