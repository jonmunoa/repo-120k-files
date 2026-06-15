// fichero 41001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41001;

Registro41001 crear_registro41001(int id) {
    Registro41001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
