// fichero 46041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46041;

Registro46041 crear_registro46041(int id) {
    Registro46041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46041(Registro46041 r) {
    return r.valor + r.id;
}
