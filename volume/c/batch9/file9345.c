// fichero 9345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9345;

Registro9345 crear_registro9345(int id) {
    Registro9345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
