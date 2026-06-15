// fichero 1637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1637;

Registro1637 crear_registro1637(int id) {
    Registro1637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
