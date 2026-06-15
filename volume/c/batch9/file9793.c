// fichero 9793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9793;

Registro9793 crear_registro9793(int id) {
    Registro9793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
